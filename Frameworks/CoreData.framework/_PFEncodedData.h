/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData;

@interface _PFEncodedData : NSData  {
    NSData *_aData;
    unsigned int _byteCount;
}


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)release;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const void*)bytes;
- (id)initWithCoder:(id)arg1;
- (unsigned int)retainCount;
- (id)description;
- (unsigned int)length;
- (id)mutableCopy;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)privateCopy;

@end