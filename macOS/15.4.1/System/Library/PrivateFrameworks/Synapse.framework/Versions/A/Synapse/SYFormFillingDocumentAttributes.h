@interface SYFormFillingDocumentAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL formFillingCoachingDisabled;

+ (void)_formFillingDocumentAttributesForFileAtURL:(id)a0 completion:(id /* block */)a1;
+ (void)_removeFormFillingDocumentAttributesForFileAtURL:(id)a0 completion:(id /* block */)a1;
+ (id)dictionaryRepresentationWithNullValues;
+ (id)formFillingDocumentAttributesForFileAtURL:(id)a0 error:(id *)a1;
+ (BOOL)removeFormFillingDocumentAttributesForFileAtURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)saveToFileURL:(id)a0 error:(id *)a1;
- (BOOL)_formFillingCoachingDisabledValueFromDictionary:(id)a0;
- (void)_saveToFileURL:(id)a0 completion:(id /* block */)a1;
- (id)initWithFormFillingCoachingDisabled:(BOOL)a0;

@end
