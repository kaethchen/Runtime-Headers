@class NSString;

@interface KHLayer : KHModel <KHJSONGeneratorProtocol> {
    long long _classId;
    NSString *_name;
    long long _categoryId;
    int _blendMode;
    long long _hidden;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadLayersForTreatments:(id)a0;

- (void)dealloc;
- (id)name;
- (void)setHidden:(long long)a0;
- (void)setName:(id)a0;
- (void)remove;
- (long long)hidden;
- (int)blendMode;
- (void)setBlendMode:(int)a0;
- (long long)categoryId;
- (long long)classId;
- (void)setClassId:(long long)a0;
- (void)setCategoryId:(long long)a0;
- (id)JSONRepresentation;
- (void)cacheBlendMode:(int)a0;
- (void)cacheCategoryId:(long long)a0;
- (void)cacheClassId:(long long)a0;
- (void)cacheHidden:(long long)a0;
- (void)cacheName:(id)a0;
- (BOOL)isSimilarToModel:(id)a0 skippingFields:(id)a1 differences:(id *)a2;

@end
