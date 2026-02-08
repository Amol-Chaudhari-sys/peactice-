from django.http import HttpResponse
from django.shortcuts import render


def home (request):
    # return  HttpResponse("this is my home page" )
    return render(request ,"web/index.html")

def about (request):
    return  HttpResponse("this is my about section " )

def contact (request):
    return  HttpResponse("this is my returns section " )
def us(request):
    return HttpResponse("this is my about us ")

