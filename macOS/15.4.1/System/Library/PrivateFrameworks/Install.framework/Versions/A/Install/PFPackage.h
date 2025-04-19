@interface PFPackage : PFCommon

+ (id)cachedPackageWithURL:(id)a0;
+ (id)packageWithURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (int)capabilities;
- (BOOL)hasCapability:(int)a0;
- (id)createReceipt:(id)a0 withPlan:(id)a1;
- (int)extractPayloadFiles:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (int)extractPayloadToDirectory:(id)a0;
- (int)extractPayloadWithPlan:(id)a0 toDirectory:(id)a1;
- (BOOL)hasAction:(id)a0;
- (id)initWithModule:(Class)a0 forLocation:(id)a1 error:(id *)a2;
- (id)runAction:(id)a0 withContextDictionary:(id)a1 localization:(id)a2;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)taskForExtraction:(id)a0;
- (id)taskForExtraction:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;
- (id)taskToCreateReceipt:(id)a0 withPlan:(id)a1;

@end
