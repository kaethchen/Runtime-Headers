@class NSString;
@protocol SIRINLUUserDialogAct;

@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SIRINLUUserDialogAct> offeredAct;
@property (retain, nonatomic) NSString *renderedText;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOfferedAct:(id)a0;

@end
