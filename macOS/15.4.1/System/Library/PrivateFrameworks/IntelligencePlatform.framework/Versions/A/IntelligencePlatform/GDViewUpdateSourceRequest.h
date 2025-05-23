@class NSData, NSString, GDSourceListenerConfigIdentifier;

@interface GDViewUpdateSourceRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GDSourceListenerConfigIdentifier *configIdentifier;
@property (readonly, nonatomic) NSData *initialBookmark;
@property (retain, nonatomic) NSData *latestBookmark;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) BOOL triggered;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigIdentifier:(id)a0 initialBookmark:(id)a1 latestBookmark:(id)a2 state:(id)a3 triggered:(BOOL)a4;

@end
