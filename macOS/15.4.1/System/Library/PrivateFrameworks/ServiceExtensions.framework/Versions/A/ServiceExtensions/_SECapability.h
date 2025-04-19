@class NSString;

@interface _SECapability : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) NSString *mediaEnvironment;

+ (id)assertionWithDomain:(id)a0 name:(id)a1;
+ (id)assertionWithDomain:(id)a0 name:(id)a1 environmentIdentifier:(id)a2;
+ (id)assertionWithDomain:(id)a0 name:(id)a1 environmentIdentifier:(id)a2 willInvalidate:(id /* block */)a3 didInvalidate:(id /* block */)a4;
+ (id)mediaWithWebsite:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)setActive:(BOOL)a0;

@end
