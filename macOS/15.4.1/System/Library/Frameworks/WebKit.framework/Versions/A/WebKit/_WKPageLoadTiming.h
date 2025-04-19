@class NSDate;

@interface _WKPageLoadTiming : NSObject {
    struct WallTime { double m_value; } _navigationStart;
    struct WallTime { double m_value; } _firstVisualLayout;
    struct WallTime { double m_value; } _firstMeaningfulPaint;
    struct WallTime { double m_value; } _documentFinishedLoading;
    struct WallTime { double m_value; } _allSubresourcesFinishedLoading;
}

@property (readonly, nonatomic) NSDate *navigationStart;
@property (readonly, nonatomic) NSDate *firstVisualLayout;
@property (readonly, nonatomic) NSDate *firstMeaningfulPaint;
@property (readonly, nonatomic) NSDate *documentFinishedLoading;
@property (readonly, nonatomic) NSDate *allSubresourcesFinishedLoading;

- (id).cxx_construct;
- (id)_initWithTiming:(const void *)a0;

@end
