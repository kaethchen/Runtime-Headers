@interface CoreSpeechFoundation.CSEnhancedEndpointerInputVectorDefault : NSObject <CoreSpeechFoundation.CSEnhancedEndpointerInputVector>

@property (nonatomic, retain) void /* unknown type, empty encoding */ modelType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ multiArray;

- (id)init;
- (void).cxx_destruct;
- (id)modelName;
- (id)initWithShape:(id)a0 dataType:(long long)a1 error:(id *)a2;
- (long long)endpointerType;
- (id)multiArrayWithContext:(id)a0;

@end
