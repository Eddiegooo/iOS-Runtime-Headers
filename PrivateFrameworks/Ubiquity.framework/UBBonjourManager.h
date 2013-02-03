/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Ubiquity.framework/Ubiquity
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet, NSString, APSConnection, NSSet, NSMutableDictionary;

@interface UBBonjourManager : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate, APSConnectionDelegate> {
    struct { 
        NSMutableDictionary *_browsers; 
        NSMutableSet *_resolvingNetServices; 
        struct { 
            NSMutableDictionary *_byFQDN; 
            NSMutableDictionary *_byIdentity; 
        } _monitoredNetServices; 
    struct { 
        NSMutableDictionary *_netServices; 
    struct { 
        struct { 
            NSMutableDictionary *_byFQDN; 
            NSMutableDictionary *_byEndPoint; 
            NSMutableDictionary *_byUUID; 
        } _foundServices; 
        NSMutableDictionary *_preferredFQDN; 
        NSMutableDictionary *_collectionUUIDs; 
    int (*_mme_push_cb)();
    int (*_mme_set_token_cb)();
    int (*_network_change_cb)();
    int (*_notify_cb)();
    } _browserState;
    NSString *_domain;
    NSMutableDictionary *_identities;
    NSString *_mmeUUID;
    struct dispatch_queue_s { } *_notifyQueue;
    void *_notify_ctx;
    int _periodicPushInterval;
    struct dispatch_source_s { } *_periodicPushTimer;
    int _port;
    } _publishedState;
    APSConnection *_pushConnection;
    NSString *_pushEnvironment;
    struct __SCNetworkReachability { } *_reachabilityRef;
    unsigned long long _refetchMMeConfigTime;
    struct __CFRunLoop { } *_runloop;
    } _serviceState;
    struct __CFDictionary { } *_uuidCtx;
    unsigned char _uuid[16];
    NSSet *_vlans;
    bool_bonjourDisabled;
    bool_invalidated;
    bool_previously_suspended;
    bool_setupComplete;
    bool_srvBonjourDisabled;
    bool_suspended;
    bool_use_ssl;
}

- (void)_deallocBrowserState;
- (void)_deallocNetworkState;
- (void)_deallocPublishedState;
- (void)_deallocPushState;
- (void)_deallocReachability;
- (void)_deallocServiceState;
- (id)_endPointForServiceDict:(id)arg1;
- (id)_fqdnForNetService:(id)arg1;
- (id)_fqdnForServiceDict:(id)arg1;
- (id)_getIdentityForNetService:(id)arg1 rnd:(unsigned int*)arg2;
- (bool)_havePreferredFQDN:(id)arg1;
- (void)_initBrowserState;
- (void)_initNetworkState;
- (void)_initPublishedState;
- (void)_initPushState;
- (void)_initReachability;
- (void)_initServiceState;
- (bool)_isValid;
- (void)_processNetService:(id)arg1 type:(int)arg2;
- (void)_rearmPeriodicPushTimer;
- (void)_refetchMMeConfig;
- (void)_restartBrowsers;
- (void)_runBlockOnRL:(id)arg1;
- (id)_serviceDataForIdentity:(id)arg1 prependedID:(id)arg2;
- (void)_setNetworkReachable:(BOOL)arg1;
- (bool)_splitNetServiceName:(id)arg1 rnd:(unsigned int*)arg2 hashedID:(id*)arg3;
- (void)_updateServicesForIdentity:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (struct { unsigned char x1[16]; boolx2; void *x3; }*)copyOnlinePeerContexts:(unsigned int*)arg1;
- (id)copyPreferredEndPointURL:(unsigned char[16])arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)removeIdentity:(id)arg1;
- (void)resume;
- (void)sendMMePush:(id)arg1;
- (void)setContext:(void*)arg1 forUUID:(unsigned char[16])arg2;
- (void)setMMeUUID:(unsigned char[16])arg1;
- (void)setPreferredFQDN:(id)arg1 forUUID:(unsigned char[16])arg2;
- (void)setupClient:(unsigned char[16])arg1 port:(int)arg2 use_ssl:(bool)arg3 network_change_cb:(int (*)())arg4 notify_cb:(int (*)())arg5 notify_ctx:(void*)arg6 domain:(id)arg7 vlans:(id)arg8;
- (void)setupMMeEnvironment:(id)arg1 mme_set_token_cb:(int (*)())arg2 mme_push_cb:(int (*)())arg3;
- (void)suspend;
- (void)updateIdentity:(id)arg1 collections:(id)arg2;
- (bool)uuidOnline:(unsigned char[16])arg1;

@end