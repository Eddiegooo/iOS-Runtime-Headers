/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRecordMerger : NSObject  {
}


- (BOOL)mergeSingleValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3;
- (void)addValue:(void*)arg1 withProperty:(int)arg2 toExistingValues:(struct __CFSet { }*)arg3;
- (BOOL)addMultiValueEntry:(void*)arg1 atIndex:(unsigned int)arg2 toMultiValue:(void*)arg3 withProperty:(int)arg4 existingValues:(struct __CFSet { }*)arg5;
- (BOOL)mergeMultiValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3;
- (void)mergeVCardRecord:(void*)arg1 withProperties:(struct __CFArray { }*)arg2 intoRecord:(void*)arg3;

@end