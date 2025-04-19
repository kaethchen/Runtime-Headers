@class NSString, MRPlayerPath, _MRPlaybackSessionRequestProtobuf, NSDictionary, NSData;

@interface MRPlaybackSessionRequest : NSObject

@property (readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) MRPlayerPath *destinationPlayerPath;
@property (copy, nonatomic) NSDictionary *destinationCommandInfo;
@property (readonly, copy, nonatomic) NSData *data;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(id)a1;
- (id)initWithProtobuf:(id)a0;

@end
