#
# Be sure to run `pod lib lint By247SDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'By247SDK'
  s.version          = '0.1.0'
  s.summary          = 'By247SDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'http://krzyzanowskim.github.io/OpenSSL/'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Ratnapriya' => 'ratnapriya.saripalli@247-inc.com' }
  s.source           = { :git => 'https://github.com/Ratnapriya/By247SDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'include/**/*'
  s.preserve_paths      = 'lib/libBy247SDK.a'
  s.vendored_libraries  = 'lib/libBy247SDK.a'
  #s.vendored_frameworks = 'framework/By247SDK.framework'
  s.libraries = 'By247SDK'

  # s.resource_bundles = {
  #   'By247SDK' => ['By247SDK/Assets/*.png']
  # }

  s.public_header_files = 'include/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
