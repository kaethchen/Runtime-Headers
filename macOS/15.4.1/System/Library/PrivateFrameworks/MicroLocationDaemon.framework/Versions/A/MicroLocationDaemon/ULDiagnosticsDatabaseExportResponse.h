@class NSArray, NSError;

@interface ULDiagnosticsDatabaseExportResponse : NSObject

@property (retain, nonatomic) NSArray *exportedURLs;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
