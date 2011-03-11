/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}

+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithWeakToWeakObjects;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)mapTableWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2;
+ (id)mapTableWithStrongToStrongObjects;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)allValues;
- (id)allKeys;
- (id)dictionaryRepresentation;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (void)setItem:(const void*)arg1 forKey:(const void*)arg2;
- (id)enumerator;
- (id)mutableDictionary;
- (id)initWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2 capacity:(unsigned int)arg3;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned int)arg3;
- (id)keyPointerFunctions;
- (id)valuePointerFunctions;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (unsigned int)getKeys:(const void**)arg1 values:(const void**)arg2;
- (void)removeAllItems;

@end