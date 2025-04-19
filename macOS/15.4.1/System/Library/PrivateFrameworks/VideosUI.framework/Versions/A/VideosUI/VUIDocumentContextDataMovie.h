@class NSString;

@interface VUIDocumentContextDataMovie : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *movieID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonData;
- (id)initWithMovieID:(id)a0;

@end
