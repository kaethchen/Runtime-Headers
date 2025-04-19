@class NSString, NSData, _MRMusicHandoffEventProtobuf;

@interface MRMusicHandoffEvent : NSObject

@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) _MRMusicHandoffEventProtobuf *protobuf;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithProtobufData:(id)a0;

@end
