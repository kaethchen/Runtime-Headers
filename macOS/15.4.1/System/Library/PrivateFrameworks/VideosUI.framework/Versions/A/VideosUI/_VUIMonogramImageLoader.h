@class NSString, NSDictionary;

@interface _VUIMonogramImageLoader : NSObject <VUIImageLoader> {
    NSDictionary *_generatorByType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_imageLoadError;
- (id)URLForObject:(id)a0;
- (void)cancelLoad:(id)a0;
- (id)imageKeyForObject:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;

@end
