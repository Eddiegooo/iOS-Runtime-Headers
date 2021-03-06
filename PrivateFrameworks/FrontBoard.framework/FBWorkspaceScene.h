/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceScene : NSObject <BSDescriptionProviding, FBSceneClient, FBWorkspaceServerSceneEventHandler> {
    FBSSceneClientSettings *_clientSettings;
    <FBSceneHost> *_host;
    NSString *_identifier;
    FBUISceneIdentity *_identity;
    BOOL _invalidated;
    BOOL _sentCreationEvent;
    FBSSceneSettings *_settings;
    FBWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_workspaceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <FBSceneHost> *host;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) FBUISceneIdentity *identity;
@property (nonatomic, readonly) FBWorkspace *parentWorkspace;
@property (getter=_workspaceQueue_sceneSettings, setter=_workspaceQueue_setSceneSettings:, nonatomic, copy) FBSSceneSettings *sceneSettings;
@property (getter=_workspaceQueue_hasSentCreationEvent, setter=_workspaceQueue_setSentCreationEvent:, nonatomic) BOOL sentCreationEvent;
@property (nonatomic, readonly, copy) FBSSceneSettings *settings;
@property (readonly) Class superclass;

- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_workspaceQueue;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(id /* block */)arg1 success:(BOOL)arg2;
- (BOOL)_workspaceQueue_hasSentCreationEvent;
- (void)_workspaceQueue_invalidate;
- (id)_workspaceQueue_process;
- (id)_workspaceQueue_sceneSettings;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(id /* block */)arg2;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(id /* block */)arg3;
- (void)_workspaceQueue_setSceneSettings:(id)arg1;
- (void)_workspaceQueue_setSentCreationEvent:(BOOL)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)host;
- (void)host:(id)arg1 configureWithInitialClientSettings:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)identifier;
- (id)identity;
- (id)initWithParentWorkspace:(id)arg1 identity:(id)arg2;
- (void)invalidate;
- (id)parentWorkspace;
- (void)sceneAttachLayer:(id)arg1;
- (void)sceneDetachLayer:(id)arg1;
- (void)sceneDidReceiveActions:(id)arg1;
- (void)sceneDidUpdateClientSettings:(id)arg1;
- (void)sceneUpdateLayer:(id)arg1;
- (id)settings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
