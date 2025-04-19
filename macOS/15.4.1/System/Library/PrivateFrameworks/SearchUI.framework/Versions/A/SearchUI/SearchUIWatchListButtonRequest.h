@class NSString;

@interface SearchUIWatchListButtonRequest : NSObject

@property (retain) NSString *identifier;
@property int type;
@property BOOL isHorizontallySrollingStyle;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
