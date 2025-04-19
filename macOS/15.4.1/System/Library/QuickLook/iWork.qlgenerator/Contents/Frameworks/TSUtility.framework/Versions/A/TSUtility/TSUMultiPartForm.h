@class NSString, NSData, NSInputStream, NSMutableArray;

@interface TSUMultiPartForm : NSObject {
    NSString *_boundaryString;
    NSMutableArray *_parts;
}

@property (readonly, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) NSInputStream *bodyStream;
@property (readonly, nonatomic) NSString *contentType;

- (id)init;
- (void).cxx_destruct;
- (id)boundary;
- (id)boundaryEndData;
- (void)addPartWithName:(id)a0 filename:(id)a1 contentType:(id)a2 jsonDictionaryPayload:(id)a3 options:(unsigned long long)a4;
- (void)addPartWithName:(id)a0 filename:(id)a1 contentType:(id)a2 payload:(id)a3;
- (void)addPartWithName:(id)a0 filename:(id)a1 contentType:(id)a2 stream:(id)a3;
- (id)boundaryData;

@end
