@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserRejected : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *offerId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOfferId:(id)a0 reference:(id)a1;

@end
