@class NSString, ATXAnchor, NSDate, NSNumber, ATXDuetEvent;

@interface ATXAnchorModelIncompleteInferenceEvent : NSObject <NSSecureCoding> {
    NSString *_anchorClassString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXAnchor *anchor;
@property (readonly, nonatomic) ATXDuetEvent *anchorEvent;
@property (readonly, nonatomic) NSDate *dateFirstAdded;
@property (retain, nonatomic) NSNumber *retryCount;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0 anchorEvent:(id)a1;
- (id)initWithAnchorClassString:(id)a0 anchorEvent:(id)a1 dateFirstAdded:(id)a2 retryCount:(id)a3;

@end
