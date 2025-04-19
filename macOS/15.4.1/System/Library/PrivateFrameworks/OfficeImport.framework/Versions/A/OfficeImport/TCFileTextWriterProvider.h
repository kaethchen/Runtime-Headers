@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *filePath;

- (void).cxx_destruct;
- (BOOL)setUp;
- (id)initWithFilePath:(id)a0;

@end
