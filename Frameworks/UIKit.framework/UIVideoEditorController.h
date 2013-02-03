/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;

@interface UIVideoEditorController : UINavigationController {
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int didRevertStatusBar : 1; 
    } _flags;
    NSInteger _previousStatusBarMode;
    NSMutableDictionary *_properties;
}

@property <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> *delegate;
@property(copy) NSString *videoPath;
@property double videoMaximumDuration;
@property NSUInteger videoQuality;

+ (BOOL)canEditVideoAtPath:(id)arg1;

- (void)_autoDismiss;
- (id)_createInitialController;
- (BOOL)_didRevertStatusBar;
- (void)_initializeProperties;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (id)_properties;
- (void)_removeAllChildren;
- (void)_setProperties:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setupControllers;
- (id)_valueForProperty:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)init;
- (void)setParentViewController:(id)arg1;
- (void)setVideoMaximumDuration:(double)arg1;
- (void)setVideoPath:(id)arg1;
- (void)setVideoQuality:(NSUInteger)arg1;
- (double)videoMaximumDuration;
- (id)videoPath;
- (NSUInteger)videoQuality;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end