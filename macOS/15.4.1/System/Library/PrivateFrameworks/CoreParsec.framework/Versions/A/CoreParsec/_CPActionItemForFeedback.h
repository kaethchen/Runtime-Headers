@class NSData, NSString, _CPPunchoutForFeedback;

@interface _CPActionItemForFeedback : PBCodable <_CPActionItemForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _CPPunchoutForFeedback *punchout;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
