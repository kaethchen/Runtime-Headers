@class MKLocalSearchCompletion, NSString, NSArray, NSData, CLLocation, NSURL, EKVirtualConferenceRoomType;

@interface CalUILocationSuggestionResult : NSObject

@property (retain) NSString *searchTerm;
@property (retain) NSString *displayString;
@property (retain) NSData *mapKitHandle;
@property (retain) NSArray *addressStrings;
@property (retain) CLLocation *location;
@property double radius;
@property BOOL isCategory;
@property BOOL drawDivider;
@property long long type;
@property long long proximity;
@property (retain) EKVirtualConferenceRoomType *roomType;
@property (retain) NSURL *detectedURL;
@property (retain) MKLocalSearchCompletion *searchCompletion;

- (void).cxx_destruct;
- (id)addressString;
- (id)singleLineAddress;
- (id)keyForMatchingDuplicates;

@end
