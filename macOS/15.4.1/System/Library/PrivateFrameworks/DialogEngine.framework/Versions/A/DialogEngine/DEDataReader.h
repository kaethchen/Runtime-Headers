@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithData:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readData;

@end
