@class PXArrayChangeDetails, NSIndexSet, NSString;

@interface PXGChangeDetails : NSObject <NSCopying, PXGDiagnosticsProvider> {
    unsigned int *_nextSpriteIndexByPreviousSpriteIndex;
    long long _nextSpriteIndexByPreviousSpriteIndexCapacity;
    NSIndexSet *_spriteIndexesThatWereRemoved;
    NSIndexSet *_spriteIndexesThatWereInserted;
    NSIndexSet *_spriteIndexesThatWereModified;
    BOOL _hasMoves;
    char *_tempBuffer;
    long long _tempBufferCapacity;
    PXArrayChangeDetails *_cachedArrayChangeDetails;
}

@property (readonly, nonatomic) unsigned int numberOfSpritesAfterChange;
@property (readonly, nonatomic) unsigned int numberOfSpritesBeforeChange;
@property (readonly, nonatomic) PXGChangeDetails *inverse;
@property (readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
@property (readonly, nonatomic) NSIndexSet *removedSpriteIndexes;
@property (readonly, nonatomic) NSIndexSet *insertedSpriteIndexes;
@property (readonly, nonatomic) NSIndexSet *modifiedSpriteIndexes;
@property (readonly, nonatomic) const unsigned int *spriteIndexAfterChangeBySpriteIndexBeforeChange;
@property (readonly, nonatomic) PXArrayChangeDetails *arrayChangeDetails;
@property (nonatomic) long long layoutVersionBeforeChange;
@property (nonatomic) long long layoutVersionAfterChange;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)applyToSpriteIndexes:(unsigned int *)a0 atIndexes:(id)a1;
- (void)applySpriteTransferMap:(const unsigned int *)a0;
- (void)applyToArray:(void *)a0 elementSize:(unsigned long long)a1 countAfterChanges:(unsigned long long)a2 insertionHandler:(id /* block */)a3 modifiedHandler:(id /* block */)a4;
- (void)applyToDictionary:(id)a0 removalHandler:(id /* block */)a1;
- (void)configureWithNumberOfSpritesAfterChange:(unsigned int)a0 changeDetails:(id)a1;
- (void)increaseNumberOfSpritesBy:(unsigned int)a0;
- (id)indexSetAfterApplyingChangeDetails:(id)a0;
- (void)removeSpritesAtIndexes:(id)a0;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })replaceRemovalsWithMovesToEndForIndexes:(id)a0;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })splitIndexesIntoMovesToEndAndReinsertions:(id)a0;
- (void)_invalidateCachedArrayChangeDetails;
- (void)_invalidateLayoutVersions;
- (void)_resizeStorageIfNeeded;

@end
