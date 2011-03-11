/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSHTTPCookieStorage, <DAVAuthStore>, NSMutableArray, NSLock, NSString, AYAddress, NSMutableSet, NSMutableDictionary;

@interface DAVSession : NSObject <AYGroup> {
    NSString *_scheme;
    NSString *_host;
    AYAddress *_address;
    int _port;
    BOOL _bypassProxies;
    BOOL _builtinRedirect;
    NSMutableDictionary *_permanentRedirects;
    NSString *_userAgent;
    NSString *_acceptEncoding;
    NSString *_username;
    NSString *_password;
    id _passwordDelegate;
    unsigned int _readTimeOut;
    id _delegate;
    NSMutableDictionary *_privateInfos;
    NSMutableSet *_adapters;
    int _bufferSize;
    NSLock *_sessionLock;
    int _numWorkerThread;
    <DAVAuthStore> *_authStore;
    id _simpleAuthStore;
    void *_davReserved;
    BOOL _useKerberos;
    BOOL _supportsDigest;
    BOOL _useAuth;
    NSMutableArray *_trustedCerts;
    NSLock *_certUILock;
    BOOL _bypassCheckingServerTrust;
    id _certificateDelegate;
    NSHTTPCookieStorage *_cookieStorage;
}

+ (id)sessionWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3;
+ (void)setMaxRedirection:(int)arg1;
+ (void)setMaxWorkerThreadsPerSession:(int)arg1;
+ (void)setProxiesDelegate:(id)arg1;
+ (void)setDefaultUserAgent:(id)arg1;
+ (void)setDefaultAcceptEncoding:(id)arg1;
+ (id)defaultAcceptEncoding;
+ (void)initialize;
+ (id)defaultUserAgent;
+ (id)sessionWithURL:(id)arg1;

- (long)bufferSize;
- (BOOL)operationShouldBeLaunchedNow:(id)arg1;
- (void)operationHasEnded:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3;
- (void)setBuiltinRedirect:(BOOL)arg1;
- (BOOL)isBuiltinRedirect;
- (void)clearAuthChallenge;
- (void)addAdapter:(id)arg1;
- (BOOL)hasCredentials;
- (void)setLockOwner:(id)arg1;
- (id)acceptEncoding;
- (void)setBypassProxies:(BOOL)arg1;
- (BOOL)isBypassProxies;
- (void)setKeepAlive:(BOOL)arg1;
- (BOOL)keepAlive;
- (int)workerThreadsCount;
- (void)setBypassCheckingServerTrust:(BOOL)arg1;
- (void)correctBufferSizeWithSize:(long)arg1;
- (void)setUseKerberos:(BOOL)arg1;
- (BOOL)supportsDigest;
- (BOOL)useAuth;
- (id)trustedCerts;
- (void)setTrustedCerts:(id)arg1;
- (void)removeTrustedCerts;
- (void)notifyAdaptersRequestCreated:(id)arg1;
- (void)notifyAdaptersRequestDestroyed:(id)arg1;
- (id)URLToURI:(id)arg1;
- (unsigned int)readTimeOut;
- (void)setSupportsDigest:(BOOL)arg1;
- (BOOL)bypassCheckingServerTrust;
- (id)certificateDelegate;
- (id)getNewRequestMessage:(struct __CFHTTPMessage {}**)arg1 andStream:(struct __CFReadStream {}**)arg2 forRequest:(id)arg3;
- (BOOL)useKerberos;
- (id)lockOwner;
- (id)userAgent;
- (id)initWithURL:(id)arg1;
- (id)lock;
- (int)port;
- (id)password;
- (void)finalize;
- (id)scheme;
- (id)host;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (void)setUsername:(id)arg1 andPassword:(id)arg2;
- (void)setUseAuth:(BOOL)arg1;
- (void)setReadTimeOut:(unsigned int)arg1;
- (void)setAuthStore:(id)arg1;
- (void)setUsername:(id)arg1 andPasswordDelegate:(id)arg2;
- (void)setUserAgent:(id)arg1;
- (void)setCertificateDelegate:(id)arg1;
- (void)setCookieStorage:(id)arg1;
- (id)cookieStorage;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (id)infoForKey:(id)arg1;
- (id)username;

@end