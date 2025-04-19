@class NSString, NSArray;

@interface QLMockGenerator : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *supportedTypes;
@property (copy, nonatomic) NSString *displayBundleID;
@property (copy, nonatomic) NSString *location;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 location:(id)a1 displayBundle:(id)a2 supportedTypes:(id)a3;

@end
