@class NSString, NSURL;

@interface MPModelPodcastChapter : MPModelObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double startTime;

+ (id)__startTime_KEY;
+ (void)__MPModelPropertyPodcastChapterDuration__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastChapterStartTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastChapterTitle__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastChapterURL__MAPPING_MISSING__;
+ (id)__URL_KEY;
+ (id)__duration_KEY;
+ (id)__title_KEY;

@end
