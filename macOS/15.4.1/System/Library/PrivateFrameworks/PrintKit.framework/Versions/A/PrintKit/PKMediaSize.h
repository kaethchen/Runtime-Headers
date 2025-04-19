@class NSString;

@interface PKMediaSize : PKCollectionSpecialization <PKUserCodable>

@property (readonly) int xDimension;
@property (readonly) BOOL yDimensionIsRange;
@property (readonly) int yDimension;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } yRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaSizeWithWidth:(int)a0 height:(int)a1;

- (int)getInt:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getRange:(id)a0;
- (int)getThingType:(id)a0;
- (BOOL)hasValidIntegerTypesForXAndY;
- (id)userCodableDictionary;

@end
