@class NSString, NSArray;

@interface INSystemAppGrouping : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *iOS;
@property (retain, nonatomic) NSString *macOS;
@property (retain, nonatomic) NSArray *watchOS;
@property (retain, nonatomic) NSArray *tvOS;

+ (id)groupingForKey:(id)a0 iOS:(id)a1 macOS:(id)a2 watchOS:(id)a3;
+ (id)groupingForKey:(id)a0 iOS:(id)a1 macOS:(id)a2 watchOS:(id)a3 tvOS:(id)a4;

- (void).cxx_destruct;

@end
