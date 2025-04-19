@class NSString, NSData, NSInputStream;

@interface TSUMultiPartFormPart : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSInputStream *payloadStream;

- (void).cxx_destruct;
- (id)headerData;

@end
