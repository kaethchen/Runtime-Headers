@class NSString;

@interface _SEServiceConfiguration : NSObject {
    void /* unknown type, empty encoding */ serviceIdentifier;
    void /* unknown type, empty encoding */ interruptionHandler;
}

@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) id /* block */ interruptionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)a0;

@end
