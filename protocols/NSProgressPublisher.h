/* Generated by RuntimeBrowser.
 */

@protocol NSProgressPublisher <NSObject>

@required

- (oneway void)appWithBundleID:(NSString *)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)cancel;
- (oneway void)pause;
- (oneway void)prioritize;
- (oneway void)resume;
- (oneway void)startProvidingValuesWithInitialAcceptor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSProgressValues *, void*
- (oneway void)stopProvidingValues;

@end
