@class SCMLImageSanitization, NSString;
@protocol NURenderStatistics;

@interface _PISensitiveContentAnalysisResult : _NURenderResult <PISensitiveContentAnalysisResult>

@property (retain, nonatomic) SCMLImageSanitization *sanitization;
@property (readonly, nonatomic) BOOL isSafe;
@property (readonly, nonatomic) double sensitivityScore;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSanitization:(id)a0;

@end
