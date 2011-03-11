/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class EASession, NSThread, NSCondition, EAAccessory;

@interface EAOutputStream : NSOutputStream  {
    id _delegate;
    int _outfd;
    EAAccessory *_accessory;
    EASession *_session;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasSpaceAvailableEventSent;
    BOOL _hasSpaceAvailable;
    BOOL _isAtEndEventSent;
    unsigned int _streamStatus;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSThread *_writeAvailableThread;
    BOOL _isWriteAvailableThreadCancelled;
    NSCondition *_writeAvailableThreadRunCondition;
}


- (id)initWithAccessory:(id)arg1 forSession:(id)arg2;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_performAtEndOfStreamValidation;
- (void)_writeAvailableThread;
- (void)close;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)hasSpaceAvailable;
- (void)_streamEventTrigger;
- (void)_scheduleCallback;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;
- (unsigned int)streamStatus;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;

@end