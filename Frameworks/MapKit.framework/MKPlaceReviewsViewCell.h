/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView {
    NSString * _author;
    NSLayoutConstraint * _authorLabelBaselineConstraint;
    NSDate * _date;
    _MKUILabel * _detailLabel;
    UIImageView * _pictureView;
    unsigned int  _rating;
    _MKUILabel * _reviewLabel;
    NSLayoutConstraint * _reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint * _reviewLabelToBottomConstraint;
    NSLayoutConstraint * _reviewLabelTopConstraint;
}

@property (nonatomic, copy) NSString *author;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) UIImage *picture;
@property (nonatomic) unsigned int rating;
@property (nonatomic) NSString *reviewText;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_updateBaselineConstraints;
- (void)_updatePictureTheme:(id)arg1;
- (id)author;
- (id)date;
- (void)dealloc;
- (id)detailLabelText;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)rating;
- (void)setAuthor:(id)arg1;
- (void)setAuthor:(id)arg1 date:(id)arg2 rating:(unsigned int)arg3;
- (void)setDate:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setRating:(unsigned int)arg1;
- (void)setReviewText:(id)arg1;
- (id)standardDateAuthorLabel;
- (void)updateConstraints;
- (void)updateDetailLabelText;

@end
