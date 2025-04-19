@class NSMutableData;

@interface DEDataWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSMutableData *data;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)a0;

@end
