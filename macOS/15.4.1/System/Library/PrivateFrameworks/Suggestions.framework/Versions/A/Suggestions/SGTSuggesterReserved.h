@class SGTQueryGenius, SGTCategory;
@protocol SGTSuggesterDelegate;

@interface SGTSuggesterReserved : NSObject {
    SGTQueryGenius *genius;
    SGTCategory *category;
    id<SGTSuggesterDelegate> delegate;
}

- (void).cxx_destruct;

@end
