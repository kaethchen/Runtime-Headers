@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPFloatValueRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (BOOL)recordFloatVectors:(id)a0 metadata:(id)a1;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;
- (BOOL)recordFloatVectors:(id)a0;

@end
