@class NSString, NSNumber;

@interface ISDialogButton : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int actionType;
@property (retain) id parameter;
@property (retain) NSString *title;
@property (retain) NSNumber *state;
@property long long urlType;

+ (id)buttonWithTitle:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)_actionTypeForString:(id)a0;
- (long long)_urlTypeForString:(id)a0;
- (BOOL)isEqual:(id)a0 superficial:(BOOL)a1;
- (void)loadFromDictionary:(id)a0;
- (void)performActionFromDialog:(id)a0 withStoreClient:(id)a1;
- (void)performActionWithStoreClient:(id)a0;

@end
