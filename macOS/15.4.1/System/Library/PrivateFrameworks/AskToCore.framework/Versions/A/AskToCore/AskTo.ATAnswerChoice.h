@class NSString;

@interface AskTo.ATAnswerChoice : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ completedRequestTitle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *completedRequestTitle;
@property (nonatomic) void /* unknown type, empty encoding */ kind;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithId:(id)a0 title:(id)a1;
- (id)initWithId:(id)a0 title:(id)a1 completedRequestTitle:(id)a2;

@end
