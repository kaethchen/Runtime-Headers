@class NSData, NSString, GDSourceListenerConfigIdentifier;

@interface GDViewUpdateSourceResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GDSourceListenerConfigIdentifier *configIdentifier;
@property (readonly, nonatomic) NSData *bookmark;
@property (readonly, nonatomic) NSString *response;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigIdentifier:(id)a0 bookmark:(id)a1 response:(id)a2;

@end
