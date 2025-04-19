@class NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsVirtualGarageSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>

@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
