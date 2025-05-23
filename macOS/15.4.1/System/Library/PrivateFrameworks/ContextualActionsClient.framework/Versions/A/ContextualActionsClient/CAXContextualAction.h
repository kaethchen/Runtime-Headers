@class NSUUID, NSString, NSArray;

@interface CAXContextualAction : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXSuggestionExecutableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *suggestionUUID;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (nonatomic) long long confidence;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (id)initWithActionIdentifier:(id)a0 confidence:(long long)a1 parameters:(id)a2;
- (id)initWithActionIdentifier:(id)a0 parameters:(id)a1;

@end
