/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSimpleDCIMDirectory : NSObject {
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_baseURL;
    NSURL *_currentSubDirectory;
    unsigned int _currentSubDirectoryNumber;
    unsigned int _directoryLimit;
    NSFileManager *_fileManager;
    BOOL _hasLoadedUserInfo;
    NSObject<OS_dispatch_queue> *_isolation;
    BOOL _representsCameraRoll;
    NSString *_subDirSuffix;
    NSString *_userInfoPath;
}

@property (nonatomic, readonly, retain) NSURL *currentSubDirectory;
@property (readonly, retain) NSURL *directoryURL;
@property BOOL representsCameraRoll;

+ (id)cameraRollPlistName;
+ (id)cloudPlistName;
+ (id)migrateOldPlistToNewPlist:(id)arg1;

- (BOOL)_ensureDirectoryExists:(id)arg1;
- (void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2;
- (void)_saveUserInfo;
- (id)availableFileNameNumbersInDirNumber:(unsigned int)arg1;
- (id)currentSubDirectory;
- (void)dealloc;
- (id)directoryURL;
- (struct _NSRange { unsigned int x1; unsigned int x2; })fileNameNumberRangeForDirNumber:(unsigned int)arg1;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned int)arg3 userInfoPath:(id)arg4;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (BOOL)representsCameraRoll;
- (void)reset;
- (void)setRepresentsCameraRoll:(BOOL)arg1;
- (id)subDirURLForNumber:(unsigned int)arg1 create:(BOOL)arg2 didCreate:(BOOL*)arg3;

@end
