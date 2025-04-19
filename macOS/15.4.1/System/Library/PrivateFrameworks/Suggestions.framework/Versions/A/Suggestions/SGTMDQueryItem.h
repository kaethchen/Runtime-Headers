@class NSArray, NSString, NSMutableDictionary;

@interface SGTMDQueryItem : NSObject <SGTSearchQueryResultItem> {
    NSMutableDictionary *_attributesAndValues;
}

@property (retain) NSArray *matchingAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
