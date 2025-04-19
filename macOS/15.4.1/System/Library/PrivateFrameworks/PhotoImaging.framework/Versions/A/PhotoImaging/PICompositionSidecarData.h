@class NSArray, NSString, PIBrushStrokeHistory;

@interface PICompositionSidecarData : NSObject

@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSArray *maskSources;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) PIBrushStrokeHistory *brushStrokeHistory;

+ (id)loadFromURL:(id)a0 error:(out id *)a1;
+ (id)_loadContentsDictionaryFromData:(id)a0 error:(out id *)a1;
+ (id)dataForImageBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
+ (id)imageBufferFromData:(id)a0 error:(out id *)a1;
+ (id)loadFromDictionary:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)serialize:(out id *)a0;
- (BOOL)saveToURL:(id)a0 error:(out id *)a1;
- (id)initWithComposition:(id)a0;
- (id)contentsDictionary;
- (id)initWithSourceIdentifier:(id)a0 maskSources:(id)a1;

@end
