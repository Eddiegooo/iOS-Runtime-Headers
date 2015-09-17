/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAnchoredObjectQueryServer : HDQueryServer {
    NSMutableArray *_addedSamplesPendingResume;
    HKQueryAnchor *_anchor;
    NSObject<OS_dispatch_queue> *_batchQueue;
    NSMutableArray *_deletedSamplesPendingResume;
    unsigned int _deliveredResults;
    BOOL _deliversUpdates;
    BOOL _includeDeletedObjects;
    BOOL _initialResultsSent;
    unsigned int _limit;
    BOOL _objectsDeleted;
    BOOL _shouldResetAnchor;
    HKQueryAnchor *_startAnchor;
    BOOL _suspended;
}

@property (nonatomic, readonly) HKQueryAnchor *anchor;
@property (nonatomic, readonly) unsigned int limit;

- (void).cxx_destruct;
- (id)_maxRowIDInDatabase;
- (void)_queue_samplesWereRemovedWithAnchor:(id)arg1;
- (BOOL)_queue_shouldAcceptUpdates;
- (BOOL)_queue_shouldAccumulateUpdates;
- (void)_queue_start;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveOnPause;
- (id)anchor;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6;
- (unsigned int)limit;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2;

@end