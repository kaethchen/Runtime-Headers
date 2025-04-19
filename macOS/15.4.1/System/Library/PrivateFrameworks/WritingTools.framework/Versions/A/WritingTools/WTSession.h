@class NSUUID, NSString;
@protocol WTTextViewDelegate_Proposed_v1;

@interface WTSession : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long compositionSessionType;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) long long type;
@property (weak, nonatomic) id<WTTextViewDelegate_Proposed_v1> textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithGeneralCoder:(id)a0;
- (id)initWithGeneralCoder:(id)a0;
- (id)initWithType:(long long)a0 textViewDelegate:(id)a1;
- (long long)requestedTool;

@end
