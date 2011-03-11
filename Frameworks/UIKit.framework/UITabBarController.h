/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITabBarControllerDelegate>, NSMutableArray, UIView, UIViewController, UINavigationController, UITabBar, NSArray;

@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding> {
    UITabBar *_tabBar;
    UIView *_containerView;
    UIView *_viewControllerTransitionView;
    NSMutableArray *_viewControllers;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UINavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    <UITabBarControllerDelegate> *_delegate;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    unsigned int _maxItems;
    struct { 
        unsigned int isShowingMoreItem : 1; 
        unsigned int needsToRebuildItems : 1; 
        unsigned int isBarHidden : 1; 
        unsigned int editButtonOnLeft : 1; 
    } _tabBarControllerFlags;
}

@property(copy) NSArray * viewControllers;
@property UIViewController * selectedViewController;
@property unsigned int selectedIndex;
@property(readonly) UINavigationController * moreNavigationController;
@property(readonly) UITabBar * tabBar;
@property <UITabBarControllerDelegate> * delegate;
@property(copy) NSArray * customizableViewControllers;

+ (Class)_moreNavigationControllerClass;
+ (void)_initializeSafeCategory;

- (void)loadView;
- (id)rotatingHeaderView;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; int x5; float x6; }*)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)setViewControllers:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tabBar;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_prepareTabBar;
- (void)setTabBar:(id)arg1;
- (void)_ensureSelectedViewControllerIsDisplayed;
- (void)_setSelectedTabBarItem:(id)arg1;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (id)selectedViewController;
- (unsigned int)selectedIndex;
- (BOOL)_allowSelectionWithinMoreList;
- (void)setSelectedViewController:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (BOOL)_allowsCustomizing;
- (id)_existingMoreNavigationController;
- (id)moreNavigationController;
- (id)customizableViewControllers;
- (void)setCustomizableViewControllers:(id)arg1;
- (void)beginCustomizingTabBar:(id)arg1;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (BOOL)_isBarHidden;
- (void)showBarWithTransition:(int)arg1;
- (id)allViewControllers;
- (id)_viewControllersInTabBar;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (void)_tabBarItemClicked:(id)arg1;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (id)transientViewController;
- (void)setTransientViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)concealTabBarSelection;
- (void)revealTabBarSelection;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (BOOL)showsEditButtonOnLeft;
- (void)_setMaximumNumberOfItems:(unsigned int)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)arg1;
- (id)rotatingFooterView;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)_selectedViewControllerInTabBar;
- (void)hideBarWithTransition:(int)arg1;
- (id)viewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_layoutViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (BOOL)_shouldUseOnePartRotation;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)_transitionView;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_gkRefreshContents;
- (id)selectedNavigationController;

@end