@class NSString, NSMenuItem;

@interface CSKMenuItemRepresentation : NSObject

@property (readonly, nonatomic) NSString *property;
@property (weak, nonatomic) NSMenuItem *parentMenuItem;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) id value;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0;

@end
