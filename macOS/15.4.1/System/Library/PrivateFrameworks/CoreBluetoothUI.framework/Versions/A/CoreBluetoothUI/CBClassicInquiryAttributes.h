@class NSArray;

@interface CBClassicInquiryAttributes : NSObject

@property unsigned int searchOptions;
@property unsigned int maxResults;
@property unsigned int deviceAttributeCount;
@property (retain) NSArray *deviceAttributeList;

- (void).cxx_destruct;

@end
